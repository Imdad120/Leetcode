# Write your MySQL query statement below
SELECT Product.product_name, year, price
from Sales
join Product on Product.product_id=Sales.product_id;
