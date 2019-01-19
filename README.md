# Pointer Step-by-Step Illustration

Kindly open source code @ [Pointer.c](https://github.com/Zephyr-Koo/pcd-2-pointer-demo/blob/master/Pointer.c) and read it side-by-side to follow each step with description.

## Step 1
![Step 1](https://raw.githubusercontent.com/Zephyr-Koo/pcd-2-pointer-demo/master/step-1.png)
```
p = &b; // (1) Pointer 'p' now points to address of 'b'
```

## Step 2
![Step 2](https://raw.githubusercontent.com/Zephyr-Koo/pcd-2-pointer-demo/master/step-2.png)
```
q = p;  // (2) Pointer 'q' now points to same location as pointer 'p'
```

## Step 3
![Step 3](https://raw.githubusercontent.com/Zephyr-Koo/pcd-2-pointer-demo/master/step-3.png)
```
r = &c; // (3) Pointer 'r' now points to address of 'c'
```

## Step 4
![Step 4](https://raw.githubusercontent.com/Zephyr-Koo/pcd-2-pointer-demo/master/step-4.png)
```
p = &a; // (4) Pointer 'p' now points to address of 'a'
```

## Step 5
![Step 5](https://raw.githubusercontent.com/Zephyr-Koo/pcd-2-pointer-demo/master/step-5.png)
```
*q = 8; // (5) Store/assign value 8 into where pointer 'q' was directed,
        //     in this case, 'b'
```

## Step 6
![Step 6](https://raw.githubusercontent.com/Zephyr-Koo/pcd-2-pointer-demo/master/step-6.png)
```
*r = *p; // (6) Store/assign value from pointer 'p' into where pointer 'r'
         //     was directed, in this case, 'c'
```

## Step 7
![Step 7](https://raw.githubusercontent.com/Zephyr-Koo/pcd-2-pointer-demo/master/step-7.png)
```
*r = a + *q + *&c; // (7) Store the sum of value 'a', value from
                   //     pointer 'q', and value of 'c' into where
                   //     pointer 'r' was directed, in this case, 'c'
```
