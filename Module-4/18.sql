


-- Write a PL/SQL block using an explicit cursor to retrieve and display employee details. 
-- Create a cursor to retrieve all courses and display them one by one.


declare
    eid employees.employee_id%type;
    fname employees.first_name%type;
    lname employees.last_name%type;
    sal employees.salary%type;
    did employees.department_id%type;

    cursor emp is select employee_id, first_name,last_name,salary,department_id from employees;
begin
    
    open emp;
    loop
        fetch emp into eid,fname,lname,sal,did;
        exit when emp%notfound;

        dbms_output.put_line('employee_id   --> '||eid);
        dbms_output.put_line('first_name    --> '||fname);
        dbms_output.put_line('last_name     --> '||lname);
        dbms_output.put_line('salary        --> '||sal);
        dbms_output.put_line('department_id --> '||did);
        dbms_output.put_line('  ');
        dbms_output.put_line('  ');
    end loop;
    close emp;
end;





create table courses(
    course_id int unique primary key,
    course_name varchar(50),
    course_credits int
);

insert into courses
values(101, "B.S.C","4 years");

insert into courses
values(102, "B.S.C-I.T","2 years");

insert into courses
values(103, "B.TECH","4 years");

insert into courses
values(104, "ARTS","3 years");

insert into courses
values(105, "LLB","2 years");


declare
cursor cours_crs is select course_id,course_name,course_duration from courses;
cid courses.course_id%type;
cname courses.course_name%type;
cduration courses.course_duration%type;
begin
open cours_crs;
loop
	fetch cours_crs into cid,cname,cduration;
	exit when cours_crs%notfound;
	dbms_output.put_line(cid||'  '||cname||'  '||cduration);
end loop;
close cours_crs;
end;
