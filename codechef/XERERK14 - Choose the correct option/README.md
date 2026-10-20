<h2><a href="https://www.codechef.com/learn/course/tiet-uta018-oops-cpp-2026/EPIRND13/problems/XERERK14" target="_blank" rel="noopener noreferrer">XERERK14 — Choose the correct option</a></h2>

| | |
|---|---|
| **Difficulty** | Difficulty: Medium |
| **Language** | C++ |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [CodeChef XERERK14](https://www.codechef.com/learn/course/tiet-uta018-oops-cpp-2026/EPIRND13/problems/XERERK14) |

## Topics
_No tags available_

---

## Problem Statement

<div class="_problemStatementWrapper_bh3c4_33" bis_skin_checked="1"><div class="_problemBodyContent_bh3c4_71" bis_skin_checked="1"><h3 class="notranslate">C++ Inheritance and Constructor Output</h3><p>Find the output of the following code snippet.</p>
<pre class="language-cpp" tabindex="0"><code class="language-cpp"><span class="token macro property"><span class="token directive-hash">#</span><span class="token directive keyword">include</span> <span class="token string"><iostream></span></span>
<span class="token keyword">using</span> <span class="token keyword">namespace</span> std<span class="token punctuation">;</span>

<span class="token keyword">class</span> <span class="token class-name">A</span> <span class="token punctuation">{</span>
<span class="token keyword">public</span><span class="token operator">:</span>
    <span class="token function">A</span><span class="token punctuation">(</span><span class="token punctuation">)</span> <span class="token punctuation">{</span>
        cout <span class="token operator"><<</span> <span class="token string">"A"</span><span class="token punctuation">;</span>
    <span class="token punctuation">}</span>
    <span class="token function">A</span><span class="token punctuation">(</span><span class="token keyword">int</span> a<span class="token punctuation">)</span> <span class="token punctuation">{</span>
        cout <span class="token operator"><<</span> <span class="token string">"A="</span> <span class="token operator"><<</span> a <span class="token operator"><<</span> endl<span class="token punctuation">;</span>
    <span class="token punctuation">}</span>
<span class="token punctuation">}</span><span class="token punctuation">;</span>

<span class="token keyword">class</span> <span class="token class-name">B</span> <span class="token operator">:</span> <span class="token base-clause"><span class="token keyword">public</span> <span class="token class-name">A</span></span> <span class="token punctuation">{</span>
<span class="token keyword">public</span><span class="token operator">:</span>
    <span class="token function">B</span><span class="token punctuation">(</span><span class="token keyword">int</span> b<span class="token punctuation">)</span> <span class="token operator">:</span> <span class="token function">A</span><span class="token punctuation">(</span>b<span class="token punctuation">)</span> <span class="token punctuation">{</span>
        cout <span class="token operator"><<</span> <span class="token string">"B="</span> <span class="token operator"><<</span> b <span class="token operator"><<</span> endl<span class="token punctuation">;</span>
    <span class="token punctuation">}</span>
<span class="token punctuation">}</span><span class="token punctuation">;</span>

<span class="token keyword">int</span> <span class="token function">main</span><span class="token punctuation">(</span><span class="token punctuation">)</span> <span class="token punctuation">{</span>
    A <span class="token operator">*</span> b <span class="token operator">=</span> <span class="token keyword">new</span> <span class="token function">B</span><span class="token punctuation">(</span><span class="token number">5</span><span class="token punctuation">)</span><span class="token punctuation">;</span>
    <span class="token keyword">return</span> <span class="token number">0</span><span class="token punctuation">;</span>
<span class="token punctuation">}</span>
</code></pre><div bis_skin_checked="1"></div></div></div>