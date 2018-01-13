# Write your MySQL query statement below
select DISTINCT p.Email
from Person p, Person p2
where p.Email = p2.Email and p.Id <> p2.Id