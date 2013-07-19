#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UIImagePickerControllerDelegate, UINavigationControllerDelegate>

@property(nonatomic, weak) IBOutlet UIImageView *imageView;

- (IBAction) takePicture;

@end
