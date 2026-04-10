tasks = []

print("Quick Task Manager ")

while True:
    task_name = input("Enter task name (or type 'exit' to quit): ")
    if task_name.lower() == 'exit':
        break

    while True:
        priority = input("Enter priority (High, Medium, Low): ").capitalize()
        if priority in ["High", "Medium", "Low"]:
            break 
        else:
            print("Invalid input! Please choose from (High, Medium, Low).")
    
    tasks.append([task_name, priority])

print("\n Your Current Task List ")
for i in range(len(tasks)):
    print(f"{i+1}. Task: {tasks[i][0]} | Priority: {tasks[i][1]}")
 
if tasks:
    done = input("\nDid you finish the first task? (yes/no): ").lower()
    if done == 'yes':
        removed_task = tasks.pop(0)
        print(f"Removed '{removed_task[0]}' from the list. Well done!")
