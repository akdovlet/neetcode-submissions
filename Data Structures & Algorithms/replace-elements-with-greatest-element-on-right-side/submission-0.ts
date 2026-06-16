class Solution {
    /**
     * @param {number[]} arr
     * @return {number[]}
     */
    findMax(i: number, arr: number[]): number
    {
        let max = 0;
        for (; i < arr.length; i++)
        {
            if (arr[i] > max)
                max = arr[i];
        }
        return (max);
    }

    replaceElements(arr: number[]): number[] 
    {
        let max = this.findMax(1, arr);
        let i = 0;
        while (i < arr.length - 1)
        {
            if (arr[i] === max)
                max = this.findMax(i + 1, arr);
            arr[i] = max;
            i++;
        }
        arr[i] = -1;
        return arr;
    }
}
