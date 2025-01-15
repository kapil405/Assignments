-- Drop the teachers table from the school_db database. 
-- Drop the students table from the school_db database and verify that the table has been removed.

-- to drop teachers table first we have to remove the reference of foreign key from students table
alter table students drop constraint fk_teacher_id;

-- now we can remove tables
drop table teachers;
drop table students;

-- by running show table command we can verify the teacher and student table have been removed
show tables;
