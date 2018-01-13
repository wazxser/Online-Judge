# Write your MySQL query statement below
select FirstName, LastName, City, State
from person p left join address a on p.PersonId = a.PersonId