-- Modify the courses table by adding a column course_duration using the ALTER command. 
-- Drop the course_credits column from the courses table

alter table courses
add column course_duration varchar(50);

alter table courses drop column course_credits;

select * from courses;
