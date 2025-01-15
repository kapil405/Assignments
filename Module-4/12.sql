-- Group employees by department and count the number of employees in each department using GROUP BY. 
-- Use the AVG aggregate function to find the average salary of employees in each department. 

select count(employee_id) as "employee_count", department_id from employees group by department_id;

select avg(salary) as "average_salary_department", department_id from employees group by department_id; 