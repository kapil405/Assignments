-- Insert three records into the courses table using the INSERT command. 
-- Update the course duration of a specific course using the UPDATE command. 
-- Delete a course with a specific course_id from the courses table using the DELETE command


insert into courses
values  (100,  "B.A",     "3 year"),
        (101,  "B.C.A",   "3 years"),
        (102,  "B.TECH",  "4 years");

update courses set course_duration = "4 years" where course_id = 101;

delete from courses where course_id = 102;