# List of parents
parents = [
    {'parent': 'Henry', 'child': {'name': 'Calvin', 'age': 2}},
    {'parent': 'Ada', 'child': {'name': 'Lily', 'age': 3}},
    {'parent': 'Emilia', 'child': {'name': 'Petra', 'age': 1}},
    {'parent': 'Biff', 'child': {'name': 'Biff Jr', 'age': 4}},
    {'parent': 'Milo', 'child': {}}
]

# List of curriculum
curriculum = [
    {
        'age': 1,
        'activity': [
            'Try singing a song together.',
            'Point and name objects.'
            ]
    },
    {
        'age': 2,
        'activity': [
            'Go outside and feel surfaces.',
            'Draw with crayons.',
            'Play with soundmaking toys or instruments.',
            'Look at family pictures together.'
            ]
    },
    {
        'age': 3,
        'activity': [
            'Build with blocks.',
            'Try a simple puzzle.',
            'Read a story together.'
            ]
    }
]


# Write to json file
# with open('curriculum.json', 'w') as outfile:
#     json.dump(curriculum, outfile)

# Welcome message
print("Welcome! Below will be a list of activities for each child. \n")

for key in parents:
    getParent = key['parent']
    getChild = key['child']
    getAge = getChild['age']
    print("Here are the activities of " + getParent + "\'s child: ")
    # Checking what age the child is to print the appropriate activity
    if(getAge == 1):
        for key in curriculum:
            getAge2 = key['age']
            getActivity = key['activity']
            if(getAge2 == 1):
                for m in getActivity:
                    print(m)
    elif(getAge == 2):
        for key in curriculum:
            getAge2 = key['age']
            getActivity = key['activity']
            if(getAge2 == 2):
                for m in getActivity:
                    print(m)
    elif(getAge == 3):
        for key in curriculum:
            getAge2 = key['age']
            getActivity = key['activity']
            if(getAge2 == 3):
                for m in getActivity:
                    print(m)
    else:
        print("Activities for this child's age doesn't exist.")
    # When done cycling through the child's activity
    print("Curriculum complete!\n")
