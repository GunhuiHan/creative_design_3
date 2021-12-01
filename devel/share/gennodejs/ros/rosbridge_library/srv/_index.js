
"use strict";

let TestNestedService = require('./TestNestedService.js')
let TestMultipleRequestFields = require('./TestMultipleRequestFields.js')
let SendBytes = require('./SendBytes.js')
let TestEmpty = require('./TestEmpty.js')
let AddTwoInts = require('./AddTwoInts.js')
let TestRequestAndResponse = require('./TestRequestAndResponse.js')
let TestRequestOnly = require('./TestRequestOnly.js')
let TestMultipleResponseFields = require('./TestMultipleResponseFields.js')
let TestResponseOnly = require('./TestResponseOnly.js')
let TestArrayRequest = require('./TestArrayRequest.js')

module.exports = {
  TestNestedService: TestNestedService,
  TestMultipleRequestFields: TestMultipleRequestFields,
  SendBytes: SendBytes,
  TestEmpty: TestEmpty,
  AddTwoInts: AddTwoInts,
  TestRequestAndResponse: TestRequestAndResponse,
  TestRequestOnly: TestRequestOnly,
  TestMultipleResponseFields: TestMultipleResponseFields,
  TestResponseOnly: TestResponseOnly,
  TestArrayRequest: TestArrayRequest,
};
