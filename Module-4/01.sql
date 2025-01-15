-- Create a new database named school_db and a table called students with the 
-- following columns: student_id, student_name, age, class, and address. 
-- Insert five records into the students table and retrieve all records using the SELECT statement

create schema school_db;
use school_db;

create table students(
    student_id int,
    student_name varchar(25),
    age int,
    class varchar(25),
    address varchar(100)
);

insert into students
values (100, "Priyansh",  12,  "6",  "cg road ahmedabad"),
       (101, "kadam",     10,  "4",  "navrangpura ahmedabad"),
       (102, "rinku",     09,  "5",  "vastrapura ahmedabad"),
       (103, "soyebh",    11,  "5",  "khodiyarji nagar ahmedabad"),
       (104, "sonali",    14,  "7",  "chandkheda ahmedabad");
   
select * from students;