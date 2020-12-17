SELECT
    e.name AS Employee
FROM
    Employee e
    INNER JOIN Employee m ON m.Id = e.ManagerId
        AND e.Salary > m.Salary
