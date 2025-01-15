-- Create a table teachers with the following columns: teacher_id (Primary Key), teacher_name (NOT NULL), subject (NOT NULL), and email (UNIQUE). 
-- Implement a FOREIGN KEY constraint to relate the teacher_id from the teachers table with the students table.

create table teachers(
    teacher_id int primary key,
    teacher_name varchar(25) not null,
    subject varchar(25) not null,
    email varchar(100) unique not null
);


alter table students
add column teacher_id int after class,
add constraint fk_teacher_id foreign key (teacher_id) references teachers(teacher_id);

describe students;