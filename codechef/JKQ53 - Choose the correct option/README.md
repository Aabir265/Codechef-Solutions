<h2><a href="https://www.codechef.com/learn/course/tiet-uta018-oops-cpp-2026/EPIRND22/problems/JKQ53" target="_blank" rel="noopener noreferrer">JKQ53 — Choose the correct option:</a></h2>

| | |
|---|---|
| **Difficulty** | Difficulty: Medium |
| **Language** | C++ |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [CodeChef JKQ53](https://www.codechef.com/learn/course/tiet-uta018-oops-cpp-2026/EPIRND22/problems/JKQ53) |

## Topics
_No tags available_

---

## Problem Statement

<div class="_problemStatementWrapper_bh3c4_33" bis_skin_checked="1"><div class="_problemBodyContent_bh3c4_71" bis_skin_checked="1"><h3 class="notranslate">Class Template Specialization in C++</h3><p>What would be the output on executing the following piece of code?</p>
<pre class="language-cpp" tabindex="0"><code class="language-cpp"><span class="token macro property"><span class="token directive-hash">#</span><span class="token directive keyword">include</span> <span class="token string"><iostream></span></span>
<span class="token keyword">using</span> <span class="token keyword">namespace</span> std<span class="token punctuation">;</span>

<span class="token keyword">template</span> <span class="token operator"><</span><span class="token keyword">typename</span> <span class="token class-name">T</span><span class="token operator">></span>
<span class="token keyword">class</span> <span class="token class-name">Test</span> <span class="token punctuation">{</span>
<span class="token keyword">public</span><span class="token operator">:</span>
    <span class="token function">Test</span><span class="token punctuation">(</span><span class="token punctuation">)</span> <span class="token punctuation">{</span>
        cout <span class="token operator"><<</span> <span class="token string">"General Template"</span> <span class="token operator"><<</span> endl<span class="token punctuation">;</span>
    <span class="token punctuation">}</span>
<span class="token punctuation">}</span><span class="token punctuation">;</span>

<span class="token keyword">template</span> <span class="token operator"><</span><span class="token operator">></span>
<span class="token keyword">class</span> <span class="token class-name">Test</span><span class="token operator"><</span><span class="token keyword">int</span><span class="token operator">></span> <span class="token punctuation">{</span>
<span class="token keyword">public</span><span class="token operator">:</span>
    <span class="token function">Test</span><span class="token punctuation">(</span><span class="token punctuation">)</span> <span class="token punctuation">{</span>
        cout <span class="token operator"><<</span> <span class="token string">"Specialized Template for int"</span> <span class="token operator"><<</span> endl<span class="token punctuation">;</span>
    <span class="token punctuation">}</span>
<span class="token punctuation">}</span><span class="token punctuation">;</span>

<span class="token keyword">int</span> <span class="token function">main</span><span class="token punctuation">(</span><span class="token punctuation">)</span> <span class="token punctuation">{</span>
    Test<span class="token operator"><</span><span class="token keyword">double</span><span class="token operator">></span> obj1<span class="token punctuation">;</span>
    Test<span class="token operator"><</span><span class="token keyword">int</span><span class="token operator">></span> obj2<span class="token punctuation">;</span>
    <span class="token keyword">return</span> <span class="token number">0</span><span class="token punctuation">;</span>
<span class="token punctuation">}</span>
</code></pre><div bis_skin_checked="1"></div></div></div>