import { AppRegistry } from 'react-native';
import App from './App';
import { NativeModules } from 'react-native';
module.exports = NativeModules.ToastExample;

AppRegistry.registerComponent('TestOpenCV', () => App);
