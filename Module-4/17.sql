
-- Write a PL/SQL block using an IF-THEN condition to check the department of an employee. 
-- Use a FOR LOOP to iterate through employee records and display their names. 


declare
    emp_id number := 103;
    depart_id number;
begin
    begin
        select department_id into depart_id from employees where employee_id = emp_id;
        exception when no_data_found then depart_id := null;
    end;

        if depart_id is not null then
            dbms_output.put_line('employ department is : ' || depart_id);
        else
            dbms_output.put_line('employ didnt have anyy department');
        end if;
end;



begin
    for emp in (select * from employees) loop
        dbms_output.put_line(emp.employee_id ||' '||emp.first_name ||' '||emp.last_name);
    end loop;
end;
