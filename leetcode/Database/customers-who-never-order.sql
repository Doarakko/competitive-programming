SELECT
    name customers
FROM
    customers c
    LEFT JOIN orders o ON o.customerid = c.id
WHERE
    customerid IS NULL
