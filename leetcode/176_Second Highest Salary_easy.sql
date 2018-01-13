# Write your MySQL query statement below
select e.salary as SecondHighestSalary 
from Employee e
where e.salary >= ALL(select e2.salary
                      from Employee e2
                      where e2.salary <> (select max(e4.salary)
                                          from Employee e4))
      and e.salary <> (select max(e3.salary)
                       from Employee e3)
UNION ALL (select NULL as SecondHighestSalary)
LIMIT 1

select max(e.salary) as SecondHighestSalary
from employee e
where e.salary < (select max(e2.salary)
                  from employee e2)