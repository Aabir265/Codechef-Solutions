<h2><a href="https://www.codechef.com/learn/course/tiet-uta018-oops-cpp-2026/EPIRND13/problems/QNSNAS03" target="_blank" rel="noopener noreferrer">QNSNAS03 — Choose the correct option</a></h2>

| | |
|---|---|
| **Difficulty** | Difficulty: Hard |
| **Language** | C++ |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [CodeChef QNSNAS03](https://www.codechef.com/learn/course/tiet-uta018-oops-cpp-2026/EPIRND13/problems/QNSNAS03) |

## Topics
_No tags available_

---

## Problem Statement

<div class="_problemStatementWrapper_bh3c4_33" bis_skin_checked="1"><div class="_problemBodyContent_bh3c4_71" bis_skin_checked="1"><h3 class="notranslate">C++ Lvalue and Rvalue Reference Overloading</h3><p>Find the output of the following code snippets.</p>
<pre class="language-cpp" tabindex="0"><code class="language-cpp"><span class="token macro property"><span class="token directive-hash">#</span><span class="token directive keyword">include</span> <span class="token string"><iostream></span></span>
<span class="token keyword">using</span> <span class="token keyword">namespace</span> std<span class="token punctuation">;</span>

<span class="token keyword">void</span> <span class="token function">func</span><span class="token punctuation">(</span><span class="token keyword">int</span><span class="token operator">&</span> x<span class="token punctuation">)</span> <span class="token punctuation">{</span>
    cout <span class="token operator"><<</span> <span class="token string">" Lvalue Reference : "</span> <span class="token operator"><<</span> x <span class="token operator"><<</span> endl<span class="token punctuation">;</span>
<span class="token punctuation">}</span>

<span class="token keyword">void</span> <span class="token function">func</span><span class="token punctuation">(</span><span class="token keyword">int</span><span class="token operator">&&</span> x<span class="token punctuation">)</span> <span class="token punctuation">{</span>
    cout <span class="token operator"><<</span> <span class="token string">" Rvalue Reference : "</span> <span class="token operator"><<</span> x <span class="token operator"><<</span> endl<span class="token punctuation">;</span>
<span class="token punctuation">}</span>

<span class="token keyword">int</span> <span class="token function">main</span><span class="token punctuation">(</span><span class="token punctuation">)</span> <span class="token punctuation">{</span>
    <span class="token keyword">int</span> a <span class="token operator">=</span> <span class="token number">10</span><span class="token punctuation">;</span>
    <span class="token function">func</span><span class="token punctuation">(</span>a<span class="token punctuation">)</span><span class="token punctuation">;</span>
    <span class="token function">func</span><span class="token punctuation">(</span><span class="token number">20</span><span class="token punctuation">)</span><span class="token punctuation">;</span>
    <span class="token keyword">return</span> <span class="token number">0</span><span class="token punctuation">;</span>
<span class="token punctuation">}</span>
</code></pre><div bis_skin_checked="1"></div></div></div>