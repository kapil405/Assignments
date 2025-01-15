-- Write a stored procedure to retrieve all employees from the employees table based on department. 
-- Write a stored procedure that accepts course_id as input and returns the course details.

delimiter &&
create procedure info(in id int)
begin
select * from employees where department_id = id;
end &&

call info(2);

-----------------------------------------

delimiter &&
create procedure course_info(in id int)
begin
select * from courses where course_id = id;
end &&

call course_info(106);

