SELECT
    FirstName,
    LastName,
    City,
    State
FROM
    Person p
    LEFT JOIN Address a ON a.PersonId = p.PersonId;

