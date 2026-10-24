<h2><a href="https://www.codechef.com/learn/course/tiet-ucs301-dsa-c-2026/KJWHBF28/problems/JWHEFQ224" target="_blank" rel="noopener noreferrer">JWHEFQ224 — JWHEFQ224</a></h2>

| | |
|---|---|
| **Difficulty** | Difficulty: Easy |
| **Language** | C++​ |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [CodeChef JWHEFQ224](https://www.codechef.com/learn/course/tiet-ucs301-dsa-c-2026/KJWHBF28/problems/JWHEFQ224) |

## Topics
_No tags available_

---

## Problem Statement

<div class="_problemStatementWrapper_bh3c4_33" bis_skin_checked="1"><div class="_problemBodyContent_bh3c4_71" bis_skin_checked="1"><h3 class="notranslate">Practice - Josephus Problem</h3><p>You need to solve the famous Josephus problem using circular linked list in this section.</p>
<p>There are <code>N</code> people standing in a circle like 1->2->3...->N->1 and there is a knife. Whoever has the knife kills the person next to them and hands over the knife, i.e., if <code>2</code> has the knife in 1->2->3->1 then <code>2</code> kills <code>3</code> and hands over the knife to <code>1</code>. This process continues until there is only one person left, i.e., there is no one left to kill. This last person is deemed as the winner. Initially the knife is with person <code>1</code>.</p>
<p>For a given <code>N</code>, you need to determine the winner.</p>
<p>Note - You are given a circular linked list containing elements from <code>1</code> to <code>N</code> with head initially at <code>1</code>. In the <code>solution</code> function, you need to output a single integer denoting the winner.<br>
<strong>Do not make changes anywhere except the solveJosephus() function.</strong></p>
<div class="notranslate" bis_skin_checked="1">
<h3>Input Format</h3>
<ul>
<li>The first line of input will contain a single integer <span class="math math-inline"><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>T</mi></mrow><annotation encoding="application/x-tex">T</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.6833em;"></span><span class="mord mathnormal" style="margin-right: 0.13889em;">T</span></span></span></span></span>, denoting the number of test cases. The description of the test cases follows.</li>
<li>The first and only line of each test case contains a single integer <span class="math math-inline"><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>N</mi></mrow><annotation encoding="application/x-tex">N</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.6833em;"></span><span class="mord mathnormal" style="margin-right: 0.10903em;">N</span></span></span></span></span>, denoting the number of people</li>
</ul>
</div><div class="notranslate" bis_skin_checked="1">
<h3>Output Format</h3>
<p>For each test case, output on a new line the winner of that game.</p>
</div>
<h3 class="notranslate">Constraints</h3>
<div class="_html_code__block_bh3c4_219 notranslate" bis_skin_checked="1">
<ul>
<li><span class="math math-inline"><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>1</mn><mo>≤</mo><mi>T</mi><mo>≤</mo><mn>100</mn></mrow><annotation encoding="application/x-tex">1 \leq T \leq 100</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.7804em; vertical-align: -0.136em;"></span><span class="mord">1</span><span class="mspace" style="margin-right: 0.2778em;"></span><span class="mrel">≤</span><span class="mspace" style="margin-right: 0.2778em;"></span></span><span class="base"><span class="strut" style="height: 0.8193em; vertical-align: -0.136em;"></span><span class="mord mathnormal" style="margin-right: 0.13889em;">T</span><span class="mspace" style="margin-right: 0.2778em;"></span><span class="mrel">≤</span><span class="mspace" style="margin-right: 0.2778em;"></span></span><span class="base"><span class="strut" style="height: 0.6444em;"></span><span class="mord">100</span></span></span></span></span></li>
<li><span class="math math-inline"><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>1</mn><mo>≤</mo><mi>N</mi><mo>≤</mo><msup><mn>10</mn><mn>5</mn></msup></mrow><annotation encoding="application/x-tex">1 \leq N \leq 10^5</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.7804em; vertical-align: -0.136em;"></span><span class="mord">1</span><span class="mspace" style="margin-right: 0.2778em;"></span><span class="mrel">≤</span><span class="mspace" style="margin-right: 0.2778em;"></span></span><span class="base"><span class="strut" style="height: 0.8193em; vertical-align: -0.136em;"></span><span class="mord mathnormal" style="margin-right: 0.10903em;">N</span><span class="mspace" style="margin-right: 0.2778em;"></span><span class="mrel">≤</span><span class="mspace" style="margin-right: 0.2778em;"></span></span><span class="base"><span class="strut" style="height: 0.8141em;"></span><span class="mord">1</span><span class="mord"><span class="mord">0</span><span class="msupsub"><span class="vlist-t"><span class="vlist-r"><span class="vlist" style="height: 0.8141em;"><span style="top: -3.063em; margin-right: 0.05em;"><span class="pstrut" style="height: 2.7em;"></span><span class="sizing reset-size6 size3 mtight"><span class="mord mtight">5</span></span></span></span></span></span></span></span></span></span></span></span></li>
</ul>
</div>
<h3 class="notranslate">Sample 1:</h3>
<div class="_input_output__table_bh3c4_231 notranslate" bis_skin_checked="1"><div class="_text_copy__container_bh3c4_235" bis_skin_checked="1"><div class="_text_copy_bh3c4_235 _input_top__box_bh3c4_248" bis_skin_checked="1"><span>Input</span><div aria-label="Copy to clipboard" class="undefined css-1eiukdk" bis_skin_checked="1" style="pointer-events: all;"><span class="_icon__box_10bs7_2 _dark_10bs7_27 undefined"><i class="_copy__icon_10bs7_14"></i></span></div></div><div class="_text_copy_bh3c4_235 _ouput_top__box_bh3c4_251" bis_skin_checked="1"><span>Output</span><div aria-label="Copy to clipboard" class="undefined css-1eiukdk" bis_skin_checked="1" style="pointer-events: all;"><span class="_icon__box_10bs7_2 _dark_10bs7_27 undefined"><i class="_copy__icon_10bs7_14"></i></span></div></div></div><div class="_values__container_bh3c4_254" bis_skin_checked="1"><div class="_values_bh3c4_254" bis_skin_checked="1"><pre>2
5
4</pre></div><div class="_values_bh3c4_254" bis_skin_checked="1"><pre>3
1</pre></div></div></div>
<h3 class="notranslate">Explanation:</h3>
<div class="notranslate" bis_skin_checked="1">
<p>For n=5, the moves are as followed (the person in bracket holds the knife):<br>
(1)->2->3->4->5->1   (<code>1</code> kills <code>2</code> and hands knife to 3)<br>
1->(3)->4->5->1   (<code>3</code> kills <code>4</code> and hands knife to 5)<br>
1->3->(5)->1   (<code>5</code> kills <code>1</code> and hands knife to 3)<br>
(3)->5   (<code>3</code> kills <code>5</code> and is the only person left)</p>
<p>Therefore, 3 is the winner.</p>
</div><div bis_skin_checked="1"></div></div></div>