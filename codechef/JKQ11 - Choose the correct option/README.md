<h2><a href="https://www.codechef.com/learn/course/tiet-uta018-oops-cpp-2026/EPIRND21/problems/JKQ11" target="_blank" rel="noopener noreferrer">JKQ11 — Choose the correct option:</a></h2>

| | |
|---|---|
| **Difficulty** | Difficulty: Medium |
| **Language** | C++ |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [CodeChef JKQ11](https://www.codechef.com/learn/course/tiet-uta018-oops-cpp-2026/EPIRND21/problems/JKQ11) |

## Topics
_No tags available_

---

## Problem Statement

<div class="_problemStatementWrapper_bh3c4_33" bis_skin_checked="1"><div class="_problemBodyContent_bh3c4_71" bis_skin_checked="1"><h3 class="notranslate">Interrupted Code Flow Between Lonely Try Blocks</h3><p>What is the output of the following code?</p>
<pre class="language-cpp" tabindex="0"><code class="language-cpp"><span class="token macro property"><span class="token directive-hash">#</span><span class="token directive keyword">include</span> <span class="token string"><iostream></span></span>
<span class="token keyword">using</span> <span class="token keyword">namespace</span> std<span class="token punctuation">;</span>
<span class="token keyword">class</span> <span class="token class-name">A</span>
<span class="token punctuation">{</span>
    <span class="token keyword">public</span><span class="token operator">:</span> <span class="token function">A</span><span class="token punctuation">(</span><span class="token punctuation">)</span><span class="token punctuation">{</span><span class="token punctuation">}</span>
    <span class="token function">A</span><span class="token punctuation">(</span><span class="token keyword">int</span> a<span class="token punctuation">)</span><span class="token punctuation">{</span><span class="token punctuation">}</span>
    <span class="token keyword">float</span> <span class="token function">f</span><span class="token punctuation">(</span><span class="token keyword">int</span> a<span class="token punctuation">,</span> <span class="token keyword">int</span> b<span class="token punctuation">)</span>
    <span class="token punctuation">{</span>
        <span class="token keyword">if</span><span class="token punctuation">(</span>b<span class="token operator">==</span><span class="token number">0</span><span class="token punctuation">)</span> <span class="token keyword">throw</span> <span class="token function">exception</span><span class="token punctuation">(</span><span class="token punctuation">)</span><span class="token punctuation">;</span>
        <span class="token keyword">return</span> a<span class="token operator">/</span>b<span class="token punctuation">;</span>
    <span class="token punctuation">}</span>
<span class="token punctuation">}</span><span class="token punctuation">;</span>

<span class="token keyword">int</span> <span class="token function">main</span><span class="token punctuation">(</span><span class="token punctuation">)</span>
<span class="token punctuation">{</span>
    A a<span class="token punctuation">;</span>
    <span class="token keyword">try</span><span class="token punctuation">{</span>
        
        cout<span class="token operator"><<</span><span class="token string">"Division="</span><span class="token operator"><<</span>a<span class="token punctuation">.</span><span class="token function">f</span><span class="token punctuation">(</span><span class="token number">5</span><span class="token punctuation">,</span><span class="token number">0</span><span class="token punctuation">)</span><span class="token operator"><<</span>endl<span class="token punctuation">;</span>
        cout<span class="token operator"><<</span><span class="token string">"Success!"</span><span class="token punctuation">;</span>
    <span class="token punctuation">}</span>
    cout<span class="token operator"><<</span><span class="token string">"Outside Try"</span><span class="token punctuation">;</span>
    <span class="token keyword">return</span> <span class="token number">0</span><span class="token punctuation">;</span>
<span class="token punctuation">}</span>
</code></pre><div bis_skin_checked="1"></div></div></div>