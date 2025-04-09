import os

def rename_files_in_series(folder_path, base_name):
    files = os.listdir(folder_path)
    
    for index, file in enumerate(files, start=26):  # Start enumeration from 26
        file_extension = os.path.splitext(file)[1]
        new_file_name = f"{base_name}{index:3d}{file_extension}"  # Change the format as needed
        old_file_path = os.path.join(folder_path, file)
        new_file_path = os.path.join(folder_path, new_file_name)
        
        os.rename(old_file_path, new_file_path)
        
    print("Files renamed successfully!")

# Example usage
folder_path = "D:\VS-Code\TESTING"
base_name = "program_"
rename_files_in_series(folder_path, base_name)

