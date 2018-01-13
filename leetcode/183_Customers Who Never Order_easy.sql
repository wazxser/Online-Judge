# Write your MySQL query statement below
select c.Name as Customers
from Customers c
where not exists(select o.id
                 from Orders o
                 where c.Id = o.CustomerId )