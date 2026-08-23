#!/bin/bash

# CodeChef → GitHub Sync

echo "🔍 Checking for changes..."

# Check whether there are changes
if [[ -z $(git status --porcelain) ]]; then
    echo "✅ Nothing to sync."
    exit 0
fi

echo "📦 Changes detected."

# Get commit message
if [ -z "$1" ]; then
    echo "❌ Please provide a commit message."
    echo "Usage: ./sync.sh \"Solved CodeChef: PROBLEM_CODE\""
    exit 1
fi

# Stage all changes
git add .

# Commit
git commit -m "$1"

# Push
if git push; then
    echo ""
    echo "🚀 Successfully synced to GitHub!"
    echo "🟩 Contribution should appear once GitHub processes the commit."
else
    echo ""
    echo "❌ Push failed."
    exit 1
fi