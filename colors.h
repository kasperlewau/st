const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#414b50", /* black   */
  [1] = "#e67e80", /* red     */
  [2] = "#a7c080", /* green   */
  [3] = "#dbbc7f", /* yellow  */
  [4] = "#7fbbb3", /* blue    */
  [5] = "#d699b6", /* magenta */
  [6] = "#83c092", /* cyan    */
  [7] = "#d3c6aa", /* white   */

  /* 8 bright colors */
  [8]  = "#414b50", /* black   */
  [9]  = "#e67e80", /* red     */
  [10] = "#a7c080", /* green   */
  [11] = "#dbbc7f", /* yellow  */
  [12] = "#7fbbb3", /* blue    */
  [13] = "#d699b6", /* magenta */
  [14] = "#83c092", /* cyan    */
  [15] = "#d3c6aa", /* white   */

  /* special colors (override) */
  [16] = "#272e23", /* background */
  [17] = "#d3c6aa", /* foreground */
  /* special colors */
  [256] = "#272e23", /* background */
  [257] = "#d3c6aa", /* foreground */
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor
 */
unsigned int defaultfg = 257;
unsigned int defaultbg = 256;
unsigned int defaultcs = 257;
unsigned int defaultrcs = 256;
