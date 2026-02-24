# 🎓 Student CGPA API

A RESTful API built using **Express.js** to manage student academic performance records using an in-memory JSON database.

---

## 📌 Objective

This project demonstrates how to:

- Build RESTful GET APIs using Express
- Use static and dynamic routes
- Perform filtering and aggregation
- Return proper HTTP status codes
- Deploy backend APIs professionally

No database is used. Data is stored in an in-memory JSON array.

---

## 📌 List of implemented routes

1️⃣ GET /students

Returns all students.

Status Code: 200

Response: Full student array

2️⃣ GET `/students/topper`

Returns student with highest CGPA.

Status Code: 200

Returns single student object

If no students → 404

3️⃣ GET /students/average

Returns average CGPA of all students.

Response Format:

{
  "averageCGPA": 8.12
}

4️⃣ GET /students/count

Returns total number of students.

{
  "totalStudents": 10
}

5️⃣ GET /students/:id

Returns student by ID.

Example:

/students/3

If found → 200

If not found → 404

6️⃣ GET /students/branch/:branchName

Returns all students from a specific branch.

Example:

/students/branch/CSE

Returns array of students

If none found → returns empty array

---

# Sample API URLs
1. All students
   url - 
2. Topper student

3. Average CGPA

4. Number of students

5. Student by id

6. Student by branchName
   url - `https://student-cgpa-api-sushant.onrender.com/students/branch/cse`
# How To Run Locally
1️⃣ Clone Repository

git clone https://github.com/your-username/student-cgpa-api.git

2️⃣ Install Dependencies

npm install

3️⃣ Run Server

node index.js

Server runs on:

http://localhost:3000

# 🌍 Live Deployment

Render Deployment Link:

https://your-render-link.onrender.com
