-- Retrieve all courses from the courses table using the SELECT statement. 
-- Sort the courses based on course_duration in descending order using ORDER BY. 
-- Limit the results of the SELECT query to show only the top two courses using LIMIT

select * from courses;

select * from courses order by course_duration desc;

select * from courses ORDER BY course_duration desc limit 2;