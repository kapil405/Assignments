
-- Perform a transaction where you create a savepoint, insert records, then rollback to the savepoint. 
-- Commit part of a transaction after using a savepoint and then rollback the remaining changes

show tables;

set autocommit = off;


savepoint sp1_inserted;

insert into courses(course_id,course_name,course_duration)
values(107, "GAME-DEV", "4 years"),
      (108, "DEV-OPS", "1 years");

select * from courses;

rollback to sp1_inserted;


insert into courses(course_id,course_name,course_duration)
values(107, "GAME-DEV", "4 years");

savepoint sp2;      

insert into courses(course_id,course_name,course_duration)
values(108, "DEV-OPS", "1 years");

savepoint sp3;

rollback to sp2;

SELECT * from courses;