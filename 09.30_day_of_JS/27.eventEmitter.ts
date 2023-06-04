// https://leetcode.com/problems/event-emitter/
// topic Classes = Event Emitter
//undone

class EventEmitter {
  subscribe(eventName, callback) {
    return {
      unsubscribe: () => {},
    };
  }

  emit(eventName, args = []) {}
}
	
const emitter = new EventEmitter();

// Subscribe to the onClick event with onClickCallback
function onClickCallback() {
  return 99;
}
const sub = emitter.subscribe("onClick", onClickCallback);

emitter.emit("onClick"); // [99]
sub.unsubscribe(); // undefined
emitter.emit("onClick"); // []

// type Callback = (...args: any[]) => any;
// type Subscription = {
//   unsubscribe: () => void;
// };

// class EventEmitter {
//   subscribe(eventName: string, callback: Callback): Subscription {
//     return {
//       unsubscribe: () => {},
//     };
//   }

//   emit(eventName: string, args: any[] = []): any {}
// }
