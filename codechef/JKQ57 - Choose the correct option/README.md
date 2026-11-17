<h2><a href="https://www.codechef.com/learn/course/tiet-uta018-oops-cpp-2026/EPIRND22/problems/JKQ57" target="_blank" rel="noopener noreferrer">JKQ57 — Choose the correct option:</a></h2>

| | |
|---|---|
| **Difficulty** | Difficulty: Hard |
| **Language** | C++ |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [CodeChef JKQ57](https://www.codechef.com/learn/course/tiet-uta018-oops-cpp-2026/EPIRND22/problems/JKQ57) |

## Topics
_No tags available_

---

## Problem Statement

<div class="_problemStatementWrapper_bh3c4_33" bis_skin_checked="1"><div class="_problemBodyContent_bh3c4_71" bis_skin_checked="1"><h3 class="notranslate">Member Function Template Specialization in C++</h3><p>What would be the output on executing the following piece of code?</p>
<pre class="language-cpp" tabindex="0"><code class="language-cpp"><span class="token macro property"><span class="token directive-hash">#</span><span class="token directive keyword">include</span> <span class="token string"><iostream></span></span>
<span class="token keyword">using</span> <span class="token keyword">namespace</span> std<span class="token punctuation">;</span>
<span class="token keyword">template</span> <span class="token operator"><</span><span class="token keyword">typename</span> <span class="token class-name">T</span><span class="token operator">></span>
<span class="token keyword">class</span> <span class="token class-name">Class</span> <span class="token punctuation">{</span>
    <span class="token keyword">private</span><span class="token operator">:</span> T value<span class="token punctuation">;</span>
    <span class="token keyword">public</span><span class="token operator">:</span> <span class="token function">Class</span><span class="token punctuation">(</span>T val<span class="token punctuation">)</span><span class="token punctuation">;</span>
    T <span class="token function">multiply</span><span class="token punctuation">(</span>T factor<span class="token punctuation">)</span><span class="token punctuation">;</span>
<span class="token punctuation">}</span><span class="token punctuation">;</span>

<span class="token keyword">template</span> <span class="token operator"><</span><span class="token keyword">typename</span> <span class="token class-name">T</span><span class="token operator">></span>
<span class="token class-name">Class</span><span class="token operator"><</span>T<span class="token operator">></span><span class="token double-colon punctuation">::</span><span class="token function">Class</span><span class="token punctuation">(</span>T val<span class="token punctuation">)</span> <span class="token punctuation">{</span> value <span class="token operator">=</span> val<span class="token punctuation">;</span> <span class="token punctuation">}</span>

<span class="token keyword">template</span> <span class="token operator"><</span><span class="token keyword">typename</span> <span class="token class-name">T</span><span class="token operator">></span>
T <span class="token class-name">Class</span><span class="token operator"><</span>T<span class="token operator">></span><span class="token double-colon punctuation">::</span><span class="token function">multiply</span><span class="token punctuation">(</span>T factor<span class="token punctuation">)</span> <span class="token punctuation">{</span> <span class="token keyword">return</span> value <span class="token operator">*</span> factor<span class="token punctuation">;</span> <span class="token punctuation">}</span>

<span class="token keyword">template</span> <span class="token operator"><</span><span class="token operator">></span> <span class="token keyword">int</span> <span class="token class-name">Class</span><span class="token operator"><</span><span class="token keyword">int</span><span class="token operator">></span><span class="token double-colon punctuation">::</span><span class="token function">multiply</span><span class="token punctuation">(</span><span class="token keyword">int</span> factor<span class="token punctuation">)</span> <span class="token punctuation">{</span> <span class="token keyword">return</span> value <span class="token operator">*</span> factor <span class="token operator">*</span> <span class="token number">2</span><span class="token punctuation">;</span> <span class="token punctuation">}</span>

<span class="token keyword">int</span> <span class="token function">main</span><span class="token punctuation">(</span><span class="token punctuation">)</span> <span class="token punctuation">{</span>
Class<span class="token operator"><</span><span class="token keyword">double</span><span class="token operator">></span> <span class="token function">obj1</span><span class="token punctuation">(</span><span class="token number">5.5</span><span class="token punctuation">)</span><span class="token punctuation">;</span>
cout <span class="token operator"><<</span> obj1<span class="token punctuation">.</span><span class="token function">multiply</span><span class="token punctuation">(</span><span class="token number">2.0</span><span class="token punctuation">)</span> <span class="token operator"><<</span> endl<span class="token punctuation">;</span> Class<span class="token operator"><</span><span class="token keyword">int</span><span class="token operator">></span> <span class="token function">obj2</span><span class="token punctuation">(</span><span class="token number">5</span><span class="token punctuation">)</span><span class="token punctuation">;</span> cout <span class="token operator"><<</span> 
    obj2<span class="token punctuation">.</span><span class="token function">multiply</span><span class="token punctuation">(</span><span class="token number">2</span><span class="token punctuation">)</span> <span class="token operator"><<</span> endl<span class="token punctuation">;</span>
<span class="token keyword">return</span> <span class="token number">0</span><span class="token punctuation">;</span>
<span class="token punctuation">}</span>
</code></pre><div bis_skin_checked="1"></div></div></div>