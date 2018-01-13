# Write your MySQL query statement below
select e.Name as Employee from Employee e 
where e.salary > (select e2.Salary 
                  from employee e2 
                  where e.ManagerId = e2.id)