/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@class SSURLConnectionRequest;

@interface RadioGetWishListRequest : RadioRequest {
    unsigned int _maxNumberOfTracks;
    SSURLConnectionRequest *_request;
}

@property unsigned int maxNumberOfTracks;

- (void).cxx_destruct;
- (void)cancel;
- (id)init;
- (unsigned int)maxNumberOfTracks;
- (void)setMaxNumberOfTracks:(unsigned int)arg1;
- (void)startWithCompletionHandler:(id)arg1;

@end