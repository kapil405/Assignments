-- Create the customer table without the foreign key constraint
create table customer(
    customer_id int primary key,
    cust_name varchar(25) not null,
    city varchar(20) not null,
    grade int,
    salesman_id int not null
);

-- Insert data into the customer table
insert into customer (customer_id, cust_name, city, grade, salesman_id)
values 
(3002, 'Nick Rimando', 'New York', 100, 5001),
(3007, 'Brad Savis', 'New York', 200, 5001),
(3005, 'Graham Zusi', 'California', 200, 5002),
(3008, 'Julian Green', 'London', 300, 5002),
(3004, 'Fabian Johnson', 'Paris', 300, 5006),
(3009, 'Geoff Cameron', 'Berlin', 100, 5003),
(3003, 'Jozy Altidor', 'Moscow', 200, 5007),
(3001, 'Brad Guzan', 'London', null, 5005);



-- Create the salesman table without a foreign key constraint
create table salesman(
    salesman_id int primary key,
    name varchar(25) not null,
    city varchar(20) not null,
    commission float not null
);

-- Insert data into the salesman table
insert into salesman (salesman_id, name, city, commission)
values 
(5001, 'James Hoog', 'New York', 0.15),
(5002, 'Nail Knite', 'Paris', 0.13),
(5005, 'Pit Alex', 'London', 0.11),
(5006, 'Mc Lyon', 'Paris', 0.14),
(5007, 'Paul Adam', 'Rome', 0.13),
(5003, 'Lauson Hen', 'San Jose', 0.12);


-- Add the foreign key constraint
alter table customer
add constraint fk_salesman
foreign key (salesman_id) references salesman(salesman_id);


-- QUERY
select 
    a.cust_name as customer_name,
    a.city as customer_city,
    b.name as salesman_name,
    b.commission as salesman_commission
from customer a
left join salesman b 
on a.salesman_id = b.salesman_id;
