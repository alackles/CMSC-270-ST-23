---
title: Intro to Git and GitHub
permalink: /notes/01/git/
toc: true
toc_label: "Table of Contents"
toc_icon: "cog"
---

_There are many, many, many tutorials on git and GitHub online. In an effort not to re-invent the wheel, I have compiled my favorite of these resources for this tutorial. That means it is NOT a completely follow-able tutorial if you miss class; you will want to meet with me separately._

# Git

Git is a version control system which allows you to keep track of and revert software to earlier versions. It gives you the ability to "rewind" to the past, and also allows you to make significant changes to your project without getting rid of older material. 

## A Note about Git

**It's confusing.** It's one of those things that only makes a lot of sense when you start working with it _regularly_ and _out of necessity_, not because your professor is telling you it's a good idea. 

My goal here is to give you a foundation in using git and associated tools for version control, not for you to be experts off the bat. You'll get more and more practice with more and more complicated features as we move through the course. 

## Basics of Git

First, you'll want to make a new folder and navigate to it in the command line. If you have never used the command line before, you may want to check out [this tutorial](https://tutorial.djangogirls.org/en/intro_to_command_line/) at some point. 

> [Command Line Tutorial](https://tutorial.djangogirls.org/en/intro_to_command_line/)

Once you navigate to your folder in the command line, you can create a new _repository_ by using 

```
git init
```

This starts a new, empty git repository. 

As a class, we will follow along with the official [Git tutorial](https://git-scm.com/docs/gittutorial) for version control. 

> [Git Tutorial](https://tutorial.djangogirls.org/en/intro_to_command_line/)

## Visual Exploration of Git

If you are a visual learner, and you want to understand more about branching in git, you should check out [Learn Git Branching](https://learngitbranching.js.org/), a fantastic, gamified way to learn git branching.

> [Learn Git Branching](https://tutorial.djangogirls.org/en/intro_to_command_line/)

# GitHub 

GitHub is a way to share your version-controlled projects with other people, and allow them to contribute to those projects. It is not necessary to use GitHub to use git, but it's very common to do so. 

All the things we just did on the command line with Git can also be done on GitHub. We'll see that with the QuickStart guide for GitHub, which allows us to create and make changes to a repository.

> [GitHub Quickstart](https://docs.github.com/en/get-started/quickstart/hello-world)

## Cloning our Hello, World Repository

We can get the repository on GitHub onto our computer, and link the two together, through a few simple steps:

1. **Copy** the link using the big green button that says "Code". This lets us copy the link to the repository 
2. **Clone** the repository. In the command line, we type the following command: 

```
git clone <repository URL>
```

Where `<repository URL>` is replaced by the copied link. Be careful not to include the `< >`; this is a common convention in tutorials to indicate that whatever is enclosed by `< >` should be replaced with something common. 

Then we can `push` committed work to the remote repistory using the command

```
git push -u origin main
```

We can also `pull` work in the remote repository to the local repository using

```
git pull
```


## Pushing our Existing Repository 

We can link the repository we made on our terminal to GitHub by going through a couple of steps: 

1. Create a new repository on GitHub that is **empty**. 
2. Add the link to that repository to our local one by adding it as a `remote`

```
git remote add <remote name> <repository URL>
```

In our case, 

```
git remote add origin <repository URL>
```

conforms to the standard. 

Now, just like before, we can `push` committed work to the remote repistory using the command

```
git push -u origin mai
```

We can also `pull` work in the remote repository to the local repository using

```
git pull
```

# General Tips

1. **Commit early and often.** There's no reason not to add and commit whenever you make a significant change. 
2. **If in doubt, you can always start over.** Sometimes, especially early on with git, it's easy to get into a state that feels unrecoverable. This is why committing early and often is a good idea; you can always delete your local version, clone the remote, and start all over again. 
3. **Ask questions.** If you get stuck or confused, feel free to ask about it. It's okay if things don't make perfect sense the very first time you try them. It's good, actually -- it means you are learning. 