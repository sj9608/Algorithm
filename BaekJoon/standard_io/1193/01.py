#%%

X = int(input())

i = 1;

while (X > i):
    X -= i
    i += 1

if (i % 2 == 1):
    print(i + 1 - X, '/', X, sep='');
else:
    print(X, '/', i+1-X, sep='');
# %%
