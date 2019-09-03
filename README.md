### Environment setup

We use CodeceptJS and WebDriver for test automation, so we need to install its requirements first: 

- Node.js version 8.9 or higher
- Java version 8 or higher
- Google Chrome for test running

After that we can install CodeceptJS, WebDriver and selenium server:
```
npm install codeceptjs webdriverio selenium-standalone --save-dev
```
```
npx selenium-standalone install
```

### Variables

After that we should specify variables for run tests on selected sandbox. 

Go to `data.json` and add next :

- `email` & `password` - test user data for login to the site (if you don't have any - create a test user first)
- `productPageTV` - product page link. Select a product that can be directly added to the cart (e.g. without selecting size, color, model, etc)
- `loginPage` - login page link.
- `paypalEmail` & `paypalPassword` - test Paypal user data
- `paypalCreditEmail` & `paypalCreditPassword` - test Paypal user data (that allow to test Paypal Credit function
- ``

All the other data pretend to be valid on any other sandbox
