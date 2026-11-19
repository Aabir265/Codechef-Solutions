<h2><a href="https://www.codechef.com/learn/course/tiet-uta018-oops-cpp-2026/EPIRND21/problems/JKQ04" target="_blank" rel="noopener noreferrer">JKQ04 — Choose the correct option:</a></h2>

| | |
|---|---|
| **Difficulty** | Difficulty: Hard |
| **Language** | C++ |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [CodeChef JKQ04](https://www.codechef.com/learn/course/tiet-uta018-oops-cpp-2026/EPIRND21/problems/JKQ04) |

## Topics
_No tags available_

---

## Problem Statement

<div class="_problemStatementWrapper_bh3c4_33" bis_skin_checked="1"><div class="_problemBodyContent_bh3c4_71" bis_skin_checked="1"><h3 class="notranslate">C++ Catch-All Handlers and Type Matching</h3><p>Which of the following option is correct output of the following code?</p>
<pre class="language-cpp" tabindex="0"><code class="language-cpp"><span class="token macro property"><span class="token directive-hash">#</span><span class="token directive keyword">include</span> <span class="token string"><iostream></span></span>
<span class="token keyword">using</span> <span class="token keyword">namespace</span> std<span class="token punctuation">;</span>

<span class="token keyword">int</span> <span class="token function">main</span><span class="token punctuation">(</span><span class="token punctuation">)</span> <span class="token punctuation">{</span>
    <span class="token keyword">try</span> <span class="token punctuation">{</span>
        <span class="token keyword">throw</span> <span class="token number">1.5</span><span class="token punctuation">;</span>
    <span class="token punctuation">}</span> <span class="token keyword">catch</span> <span class="token punctuation">(</span><span class="token keyword">int</span> e<span class="token punctuation">)</span> <span class="token punctuation">{</span>
        cout <span class="token operator"><<</span> <span class="token string">"Caught int: "</span> <span class="token operator"><<</span> e <span class="token operator"><<</span> endl<span class="token punctuation">;</span>
    <span class="token punctuation">}</span> <span class="token keyword">catch</span> <span class="token punctuation">(</span><span class="token punctuation">.</span><span class="token punctuation">.</span><span class="token punctuation">.</span><span class="token punctuation">)</span> <span class="token punctuation">{</span>
        cout <span class="token operator"><<</span> <span class="token string">"Caught unknown exception"</span> <span class="token operator"><<</span> endl<span class="token punctuation">;</span>
    <span class="token punctuation">}</span>
    <span class="token keyword">return</span> <span class="token number">0</span><span class="token punctuation">;</span>
<span class="token punctuation">}</span>
</code></pre><div bis_skin_checked="1"></div></div></div>