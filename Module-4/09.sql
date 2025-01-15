-- Create two new users user1 and user2 and grant user1 permission to SELECT from the courses table. 
-- Revoke the INSERT permission from user1 and give it to user2

create role student;

create user 'user1' identified by 'root' default role student;      -- user 1
create user 'user2' identified by 'root' default role student;      -- user 2

grant select on courses to 'user1';             -- granting user1 to use select on courses table
revoke insert on courses from 'user1';          -- revoking permission to inseret on courses from user1
grant insert on courses to 'user2';             -- granting user2 to use insert on courses table

