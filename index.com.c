<!DOCTYPE html>
<html lang="zh">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>阅读障碍视觉模拟</title>
    <style>
        body { font-family: Arial, sans-serif; text-align: center; padding: 50px; }
        .distorted-text {
            font-size: 24px;
            color: black;
            filter: blur(1px);
            letter-spacing: 2px;
            animation: distort 3s infinite;
        }
        @keyframes distort {
            0% { transform: rotate(0deg); }
            50% { transform: rotate(3deg) skewX(10deg); }
            100% { transform: rotate(0deg); }
        }
    </style>
</head>
<body>
    <h1 class="distorted-text">阅读障碍患者眼中的世界</h1>
    <p>这是一段模拟阅读障碍患者的文本，字符会模糊、跳动、旋转，增加阅读难度。</p>
</body>
</html>
