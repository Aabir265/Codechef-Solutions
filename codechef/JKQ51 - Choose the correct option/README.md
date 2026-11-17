<h2><a href="https://www.codechef.com/learn/course/tiet-uta018-oops-cpp-2026/EPIRND22/problems/JKQ51" target="_blank" rel="noopener noreferrer">JKQ51 — Choose the correct option:</a></h2>

| | |
|---|---|
| **Difficulty** | Difficulty: Medium |
| **Language** | C++ |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [CodeChef JKQ51](https://www.codechef.com/learn/course/tiet-uta018-oops-cpp-2026/EPIRND22/problems/JKQ51) |

## Topics
_No tags available_

---

## Problem Statement

<div class="_problemStatementWrapper_bh3c4_33" bis_skin_checked="1"><div class="_problemBodyContent_bh3c4_71" bis_skin_checked="1"><h3 class="notranslate">Function Templates with Multiple Parameters in C++</h3><p>What would be the output on executing the following piece of code?</p>
<pre class="language-cpp" tabindex="0"><code class="language-cpp"><span class="token macro property"><span class="token directive-hash">#</span><span class="token directive keyword">include</span> <span class="token string"><iostream></span></span>
<span class="token keyword">using</span> <span class="token keyword">namespace</span> std<span class="token punctuation">;</span>

<span class="token keyword">template</span> <span class="token operator"><</span><span class="token keyword">typename</span> <span class="token class-name">T</span><span class="token punctuation">,</span> <span class="token keyword">typename</span> <span class="token class-name">U</span><span class="token operator">></span>
<span class="token keyword">void</span> <span class="token function">display</span><span class="token punctuation">(</span>T x<span class="token punctuation">,</span> U y<span class="token punctuation">)</span> <span class="token punctuation">{</span>
    cout <span class="token operator"><<</span> x <span class="token operator"><<</span> <span class="token string">" "</span> <span class="token operator"><<</span> y <span class="token operator"><<</span> endl<span class="token punctuation">;</span>
<span class="token punctuation">}</span>

<span class="token keyword">int</span> <span class="token function">main</span><span class="token punctuation">(</span><span class="token punctuation">)</span> <span class="token punctuation">{</span>
    <span class="token function">display</span><span class="token punctuation">(</span><span class="token number">10</span><span class="token punctuation">,</span> <span class="token number">20.5</span><span class="token punctuation">)</span><span class="token punctuation">;</span>
    <span class="token function">display</span><span class="token punctuation">(</span><span class="token string">"Hello"</span><span class="token punctuation">,</span> <span class="token number">100</span><span class="token punctuation">)</span><span class="token punctuation">;</span>
    <span class="token keyword">return</span> <span class="token number">0</span><span class="token punctuation">;</span>
<span class="token punctuation">}</span>
</code></pre><div bis_skin_checked="1"></div></div></div>