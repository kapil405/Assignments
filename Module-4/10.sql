-- Insert a few rows into the courses table and use COMMIT to save the changes. 
-- Insert additional rows, then use ROLLBACK to undo the last insert operation. 
-- Create a SAVEPOINT before updating the courses table, and use it to roll back specific changes

insert into courses
values  (102, "B.S.C",      "4 years"),
        (103, "B.S.C-I.T",  "2 years"),
        (104, "B.TECH",     "4 years"),
        (105, "ARTS",       "3 years"),
        (106, "LLB",        "5 years");

-- commit changes
set autocommit = off;
commit;

-- inserting additional rows
insert into courses
values  (107, "DEPLOMA-IN-ARTS",  "2 years"),
        (108, "DEPLOMA-IN-CS",    "2 years");


rollback; -- rollback to last commit changes

savepoint s1;

update courses set course_duration = "4 years" where course_id = 105;
rollback to s1; -- rollback to s1 where i commit before updates