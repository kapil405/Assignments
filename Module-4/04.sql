
-- Create a table courses with columns: course_id, course_name, and course_credits. Set the course_id as the primary key. 
-- Use the CREATE command to create a database university_db. 


create table courses(
    course_id int unique primary key,
    course_name varchar(50),
    course_credits int
);

create database university_db;
