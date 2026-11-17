<h2><a href="https://www.codechef.com/learn/course/tiet-uta018-oops-cpp-2026/EPIRND22/problems/JKQ37" target="_blank" rel="noopener noreferrer">JKQ37 — Choose the correct option:</a></h2>

| | |
|---|---|
| **Difficulty** | Difficulty: Medium |
| **Language** | C++ |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [CodeChef JKQ37](https://www.codechef.com/learn/course/tiet-uta018-oops-cpp-2026/EPIRND22/problems/JKQ37) |

## Topics
_No tags available_

---

## Problem Statement

<div class="_problemStatementWrapper_bh3c4_33" bis_skin_checked="1"><div class="_problemBodyContent_bh3c4_71" bis_skin_checked="1"><h3 class="notranslate">C++ Implicit Constructor Conversion</h3><p>Which of the following option is correct output of the following code ?</p>
<pre class="language-cpp" tabindex="0"><code class="language-cpp"><span class="token macro property"><span class="token directive-hash">#</span><span class="token directive keyword">include</span> <span class="token string"><iostream></span></span>
<span class="token keyword">using</span> <span class="token keyword">namespace</span> std<span class="token punctuation">;</span>

<span class="token keyword">class</span> <span class="token class-name">Test</span> <span class="token punctuation">{</span>
    <span class="token keyword">int</span> value<span class="token punctuation">;</span>
<span class="token keyword">public</span><span class="token operator">:</span>
    <span class="token function">Test</span><span class="token punctuation">(</span><span class="token keyword">int</span> v<span class="token punctuation">)</span> <span class="token operator">:</span> <span class="token function">value</span><span class="token punctuation">(</span>v<span class="token punctuation">)</span> <span class="token punctuation">{</span><span class="token punctuation">}</span>
    <span class="token keyword">int</span> <span class="token function">getValue</span><span class="token punctuation">(</span><span class="token punctuation">)</span> <span class="token keyword">const</span> <span class="token punctuation">{</span>
        <span class="token keyword">return</span> value<span class="token punctuation">;</span>
    <span class="token punctuation">}</span>
<span class="token punctuation">}</span><span class="token punctuation">;</span>

<span class="token keyword">int</span> <span class="token function">main</span><span class="token punctuation">(</span><span class="token punctuation">)</span> <span class="token punctuation">{</span>
    Test t <span class="token operator">=</span> <span class="token number">5</span><span class="token punctuation">;</span>  <span class="token comment">// Implicit conversion from int to Test</span>
    cout <span class="token operator"><<</span> t<span class="token punctuation">.</span><span class="token function">getValue</span><span class="token punctuation">(</span><span class="token punctuation">)</span> <span class="token operator"><<</span> endl<span class="token punctuation">;</span>
    <span class="token keyword">return</span> <span class="token number">0</span><span class="token punctuation">;</span>
<span class="token punctuation">}</span>
</code></pre><div bis_skin_checked="1"></div></div></div>