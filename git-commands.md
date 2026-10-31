# Git Commands and Their Purpose

## Basic Commands

| Command | Purpose |
|---|---|
| git init | Initialize a Git repository |
| git status | Check repository status |
| git add . | Stage all changes |
| git add file | Stage a specific file |
| git commit -m "message" | Save changes in Git |
| git commit -am "message" | Stage modified tracked files and commit in one step |
| git log | View commit history |
| git log --oneline --graph --all | View history of all branches as a graph |
| git diff | Show changes |

## Branching and Merging

| Command | Purpose |
|---|---|
| git branch | Display branches |
| git branch name | Create a new branch |
| git switch name | Switch branches |
| git switch -c name | Create and switch to a branch |
| git merge name | Merge branches |
| git merge origin/main | Merge the latest remote main into the current branch |
| git branch -d name | Delete a branch after it is merged |

## Remote Repository

| Command | Purpose |
|---|---|
| git remote -v | Display remote repositories |
| git remote add origin URL | Connect GitHub repository |
| git push | Upload commits to GitHub |
| git push -u origin name | Push a new branch and set its upstream |
| git pull | Download and integrate changes |
| git fetch | Download remote updates |
| git fetch origin | Download updates from origin without merging |
| git clone URL | Clone a repository |

## GitHub CLI

| Command | Purpose |
|---|---|
| gh auth status | Check if GitHub CLI is logged in |
| gh issue create | Create an issue for an exercise |
| gh pr create | Open a pull request from the current branch |
| gh pr merge --merge --delete-branch | Merge the pull request and delete the branch |

## Workflow Followed

For every exercise:
1. Created an issue on GitHub for the exercise.
2. Created a separate branch (exercise-01, exercise-02, exercise-03).
3. Added the source code, then sample input and output, in separate commits.
4. Pushed the branch and opened a pull request with "Closes #issue-number".
5. Merged the pull request into main and pulled the latest main.

## Merge Conflict Faced

I created the exercise-02 branch from main at the same time as exercise-01. Both branches changed the same line in README.md (the placeholder line under "Completed Exercises").

After the exercise 1 pull request (#5) was merged into main, GitHub showed that the exercise 2 pull request (#6) had conflicts and could not be merged automatically.

Steps I followed to resolve it:

1. `git fetch origin` to get the updated main.
2. `git merge origin/main` on the exercise-02 branch. Git stopped with:

        CONFLICT (content): Merge conflict in README.md
        Automatic merge failed; fix conflicts and then commit the result.

3. README.md had both versions of the line between conflict markers:

        <<<<<<< HEAD
        2. Exercise 02 - Prime Numbers in a Range (exercise-02)
        =======
        1. Exercise 01 - Simple Calculator (exercise-01)
        >>>>>>> origin/main

4. Both lines were needed, so I kept both (exercise 1 first, then exercise 2) and removed the markers.
5. `git add README.md`, then `git commit -m "Resolve merge conflict in README exercise list"` and `git push`.

After pushing, the pull request showed no conflicts and was merged into main.
