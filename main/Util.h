String splitString (String inputString, int startIndex, int endIndex) {
    String answer = "";
    for (int i = startIndex, i < endIndex; i++) {
        answer += inputString[i];
    }
    return answer;
}