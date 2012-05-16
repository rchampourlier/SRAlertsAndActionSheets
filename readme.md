## Origin

This is a separated fork from [gpambrozio/BlockAlertsAnd-ActionSheets](https://github.com/gpambrozio/BlockAlertsAnd-ActionSheets).

## Differences

Extracted the button generation. This allows you to use your own custom buttons instead of only replacing the bitmap images used to generate the buttons. This is particularly useful if you use image-free custom buttons, such as [these ones](https://github.com/rchampourlier/YmsGradientButton).

You can now supply a `ButtonFactory` to the alert and action sheet classes so that your own custom buttons can be used.
