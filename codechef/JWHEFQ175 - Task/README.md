<h2><a href="https://www.codechef.com/learn/course/tiet-ucs301-dsa-c-2026/KJWHBF20/problems/JWHEFQ175" target="_blank" rel="noopener noreferrer">JWHEFQ175 — Task</a></h2>

| | |
|---|---|
| **Difficulty** | Difficulty: Medium |
| **Language** | C++ |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [CodeChef JWHEFQ175](https://www.codechef.com/learn/course/tiet-ucs301-dsa-c-2026/KJWHBF20/problems/JWHEFQ175) |

## Topics
_No tags available_

---

## Problem Statement

<div class="_problemStatementWrapper_bh3c4_33" bis_skin_checked="1"><div class="_problemBodyContent_bh3c4_71" bis_skin_checked="1"><h3 class="notranslate">Pseudocode of merge sort</h3><pre class="language-cpp" tabindex="0"><code class="language-cpp">function MERGE<span class="token operator">-</span><span class="token function">SORT</span><span class="token punctuation">(</span>A<span class="token punctuation">,</span> left<span class="token punctuation">,</span> right<span class="token punctuation">)</span>
    <span class="token keyword">if</span> left <span class="token operator"><</span> right
        middle <span class="token operator">=</span> <span class="token punctuation">(</span>left <span class="token operator">+</span> right<span class="token punctuation">)</span> <span class="token operator">/</span> <span class="token number">2</span>
        MERGE<span class="token operator">-</span><span class="token function">SORT</span><span class="token punctuation">(</span>A<span class="token punctuation">,</span> left<span class="token punctuation">,</span> middle<span class="token punctuation">)</span>
        MERGE<span class="token operator">-</span><span class="token function">SORT</span><span class="token punctuation">(</span>A<span class="token punctuation">,</span> middle <span class="token operator">+</span> <span class="token number">1</span><span class="token punctuation">,</span> right<span class="token punctuation">)</span>
        <span class="token function">MERGE</span><span class="token punctuation">(</span>A<span class="token punctuation">,</span> left<span class="token punctuation">,</span> middle<span class="token punctuation">,</span> right<span class="token punctuation">)</span>

function <span class="token function">MERGE</span><span class="token punctuation">(</span>A<span class="token punctuation">,</span> left<span class="token punctuation">,</span> middle<span class="token punctuation">,</span> right<span class="token punctuation">)</span>
    <span class="token comment">// // Merge the subarrays A[left..middle] and A[middle+1..right] into a single sorted subarray.   </span>
</code></pre>
<h3>Explanation:</h3>
<ul>
<li>
<p><strong>MERGE-SORT(A, left, right):</strong> Recursively divides the array into two halves until each subarray contains a single element. Then, calls the MERGE function to merge the sorted subarrays.</p>
</li>
<li>
<p><strong>MERGE(A, left, middle, right):</strong> Merges two sorted subarrays into a single sorted subarray.
n1 and n2 represent the lengths of the left and right subarrays.
Copies the elements of the left and right subarrays into temporary arrays L and R.
Merges the elements back into the original array A in sorted order.</p>
</li>
</ul>
<h2>Task</h2>
<ul>
<li>Given two arrays of length 3:</li>
<li><span class="math math-inline"><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>A</mi><mi>r</mi><mi>r</mi><mi>a</mi><mi>y</mi><mn>1</mn></mrow><annotation encoding="application/x-tex">Array 1</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.8778em; vertical-align: -0.1944em;"></span><span class="mord mathnormal">A</span><span class="mord mathnormal" style="margin-right: 0.02778em;">rr</span><span class="mord mathnormal">a</span><span class="mord mathnormal" style="margin-right: 0.03588em;">y</span><span class="mord">1</span></span></span></span></span> = [10, 26, 2]</li>
<li><span class="math math-inline"><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>A</mi><mi>r</mi><mi>r</mi><mi>a</mi><mi>y</mi><mn>2</mn></mrow><annotation encoding="application/x-tex">Array 2</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.8778em; vertical-align: -0.1944em;"></span><span class="mord mathnormal">A</span><span class="mord mathnormal" style="margin-right: 0.02778em;">rr</span><span class="mord mathnormal">a</span><span class="mord mathnormal" style="margin-right: 0.03588em;">y</span><span class="mord">2</span></span></span></span></span> = [94, 55, 93]</li>
<li>Your task is to merge these two arrays into a single array of length 6 in such a way that the merged array is lexicographically smallest. When merging, you must maintain the relative positions of the elements within each of the original arrays.</li>
</ul><div bis_skin_checked="1"></div></div></div>