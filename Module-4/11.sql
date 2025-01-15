
-- Create two tables: departments and employees. Perform an INNER JOIN to display employees along with their respective departments. 
-- Use a LEFT JOIN to show all departments, even those without employees. 

create table departments(
  department_id int primary key auto_increment,
  department_name varchar(50)
);


-- inserting data into department table
insert into departments(department_name)
values("HR"),
      ("SALES"),
      ("MARKETING"),
      ("FINANCE"),
      ("ENGINEERING");


create table employees (
    employee_id int primary key auto_increment,
    first_name varchar(50),
    last_name varchar(50),
    salary int not null default 8000,
    department_id int,
    foreign key (department_id) references departments(department_id)
);

alter table employees auto_increment = 100;

-- inserting data into employees table
insert into employees(first_name, last_name, salary, department_id)
values  ("steven",  "king",    "22000", 1),
        ("john",    "scote",   "16000", 2),
        ("martha",  "han",     "20000", 4),
        ("bruce",   "wain",    "15000", 2),
        ("jaydeep", "kumar",   "30000", 5),
        ("alex",    "braveni", "23000", 5);


-- inner join
select department_name, employee_id, 
       concat(first_name, " ", last_name) as "employee_name", 
       salary
from employees as a  
inner join departments as b  
on a.department_id = b.department_id;


-- left join
select  a.department_id, a.department_name,
        employee_id,
        concat(first_name," ",last_name) as "name",
        salary
from departments as a
left join employees as b
on a.department_id = b.department_id;
